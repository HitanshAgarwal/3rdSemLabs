# Printing the date
from datetime import datetime
import pytz

utc = datetime.now(pytz.utc)


ist = utc.astimezone(pytz.timezone('Asia/Kolkata'))

formatted_date = ist.strftime('%a %b %d %H:%M:%S IST %Y')

print(formatted_date)
