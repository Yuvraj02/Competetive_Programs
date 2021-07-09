import time
from plyer import notification
if __name__ == '__main__':
	print("This app will remind you to stay")

	while True:
		notification.notify(
			title="Drink Water Now",
			message="Stay Hydrated :)",
			timeout=6

		)
		time.sleep(60*60)