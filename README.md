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

Plan for make our system secure

Infrastructure and data security is of utmost importance to our exciting startup revolutionizing solar panel installation through a mobile app. Our commitment to protecting customer information and the secure operation of our services is essential to maintaining the trust of our users. In this security plan we address key protection aspects following the guidelines provided by the OWASP Top 10 for 2021.

![logo](https://github.com/SofRozo/TP3-Infratec/assets/111070857/760a840b-314d-401b-a38c-7a499f65724f)


OWASP Top 10

| ID | Category | Importance |
|--------------|--------------|--------------|
| 1   | Injection Attacks    | We have to ensure that all user inputs are properly validated and sanitized to prevent injection attacks. This is critical our Python backend when interacting with the MySQL database. For this, we can use prepared statements or ORM libraries to mitigate SQL injection risks. We also need to ensure that all queries to the MySQL database are parameterized to prevent SQL injection. |
| Dato 1.2    | Dato 2.2    | Dato 3.2    |




