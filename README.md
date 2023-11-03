```

 ______   ________   ______   _________   ______
/_____/\ /_______/\ /_____/\ /________/\ /_____/\
\:::_ \ \\::: _  \ \\:::_ \ \\__.::.__\/ \:::_:\ \
 \:(_) \ \\::(_)  \ \\:(_) ) )_ \::\ \      /_\:\ \
  \: ___\/ \:: __  \ \\: __ `\ \ \::\ \     \::_:\ \
   \ \ \    \:.\ \  \ \\ \ `\ \ \ \::\ \    /___\:\ '
    \_\/     \__\/\__\/ \_\/ \_\/  \__\/    \______/

```

## System Security

In this section, we will want you to demonstrate your knowledge of security best practices. Write your answer to this
question in `security_question.md` either in English or Spanish.

Suppose you are the head of Engineering for an exciting new tech startup that installs solar panels via an app.
It's Uber for Solar Panels! You are doing a security audit of your app's infrastructure. You are using the OWASP Top 10
for 2021 as a guide for what security issues might be a problem for you.

Your infrastructure is deployed in Kubernetes containers on Amazon Web Services. It has these components:

- A mobile app for Android and iOS.
- A web frontend that the customer can use instead of the mobile app. This is written in Javascript with Next.js.
- A MySQL database that stores customer information, including passwords, home addresses, telephone numbers, etc. It \
  also contains customer order information.
- A Python backend implemented in FastAPI. This talks to the database and serves data to both the web frontend and the \
  mobile apps.

You have 12 software engineer employees who have full access to the system, 3 customer support employees who can view
customer information and make changes to orders and accounts, and one sales employee.

Using the OWASP Top 10, what would you look for to make your system secure?


![image](https://github.com/SofRozo/TP3-Infratec/assets/111070857/f9f91dd2-d2e4-4c15-a859-bc271234e9b5)
| Encabezado 1 | Encabezado 2 | Encabezado 3 |
|--------------|--------------|--------------|
| Dato 1.1    | Dato 2.1    | Dato 3.1    |
| Dato 1.2    | Dato 2.2    | Dato 3.2    |



