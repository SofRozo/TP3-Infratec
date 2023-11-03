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
| 1   | Injection Attacks    | We have to ensure that all user inputs are properly validated and sanitized to prevent injection attacks (HTML injection). This is critical our Python backend when interacting with the MySQL database. For this, we can use prepared statements or ORM libraries to mitigate SQL injection risks. We also need to ensure that all queries to the MySQL database are parameterized to prevent SQL injection. |
| 2   | Broken Authentication   | It is fundamental to implement strong authentication mechanisms for both your mobile app and web frontend. Use secure protocols and ensure passwords are securely stored and hashed in the MySQL database. Implement account lockout and password reset mechanisms to protect against unauthorized access.   |
| 3  | Sensitive Data Exposure  |It is essential to implement strong authentication mechanisms for both the mobile application and the web frontend. Use secure protocols and ensure passwords are securely stored and encrypted in the MySQL database. Implementation of account lockout and password reset mechanisms to protect against unauthorized access.|
| 4  | XML External Entities (XXE)  |Protect the system against XML-based attacks by disabling external entity processing and validating XML inputs. We have to make sure XML parsing libraries are securely configured in the Python backend. To do this, we can implement role-based access control (RBAC) to ensure that employees can only access the data and functions they need for their work.|
| 5  | Broken Access Control  |Protect the system against XML-based attacks by disabling external entity processing and validating XML inputs. We have to make sure XML parsing libraries are securely configured in the Python backend. To do this, we can implement role-based access control (RBAC) to ensure that employees can only access the data and functions they need for their work.|




