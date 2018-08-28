email = "abist119@gmail.com"

import smtplib

foo = smtplib.SMTP('SMTP.gmail.com', 587)
foo.starttls()
foo.login("user_email", "password")
message = "Hi!!, there"
foo.sendmail("sendermail", "reciever")
foo.quit()
