import time
from collections import defaultdict


class RateLimiter:
    def __init__(self, max_requests: int, time_window: int):
        self.max_requests = max_requests
        self.time_window = time_window
        self.requests = defaultdict(list)

    def request(self, user_id: str) -> bool:
        current_time = time.time()
        if user_id in self.requests:
            self.requests[user_id] = [timestamp for timestamp in self.requests[user_id] if timestamp > current_time - self.time_window]
        
        if len(self.requests[user_id]) < self.max_requests:
            self.requests[user_id].append(current_time)
            return True
        else:
            return False

# Example usage
limiter = RateLimiter(4, 10)

print(limiter.request("user1"))  # Should print True
print(limiter.request("user1"))  # Should print True
print(limiter.request("user1"))  # Should print True
print(limiter.request("user1"))  # Should print True
time.sleep(10)
print(limiter.request("user1"))  # Should print True
print(limiter.request("user1"))  # Should print False
