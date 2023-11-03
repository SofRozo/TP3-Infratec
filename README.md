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


Se debe considerar los siguientes puntos basados en el OWASP Top 10 de 2021:

Inyección: Asegúrate de que todas las consultas a la base de datos MySQL estén parametrizadas para evitar la inyección SQL. También, valida y desinfecta todas las entradas del usuario en las aplicaciones móviles y en el frontend web.

Autenticación y gestión de sesiones rotas: Implementa una autenticación sólida y manejo de sesiones para las aplicaciones móviles, el frontend web y el backend de Python. Considera el uso de autenticación multifactorial.

Exposición de datos sensibles: Todos los datos sensibles, como contraseñas y números de teléfono, deben estar cifrados tanto en tránsito como en reposo.

Control de acceso roto: Implementa un control de acceso basado en roles (RBAC) para asegurarte de que los empleados solo puedan acceder a los datos y funciones que necesitan para su trabajo.

Configuración de seguridad incorrecta: Asegúrate de que todos tus contenedores Kubernetes y servicios AWS estén configurados correctamente y sigan las mejores prácticas de seguridad.

Cross-Site Scripting (XSS): Dado que estás utilizando JavaScript con Next.js para tu frontend web, debes asegurarte de que todas las entradas del usuario se validen y desinfecten correctamente para prevenir ataques XSS.

Inseguridad en la deserialización: Si estás deserializando datos en tu backend Python, asegúrate de que solo se acepten datos serializados seguros.

Componentes con vulnerabilidades conocidas: Mantén todas tus dependencias, incluyendo las bibliotecas JavaScript y Python, actualizadas a las últimas versiones seguras.

Registro e monitoreo insuficientes: Implementa un sistema sólido de registro y monitoreo para detectar cualquier actividad sospechosa o maliciosa lo antes posible.

Recuerda, la seguridad es un proceso continuo y debe ser una consideración clave en todas las etapas del desarrollo y mantenimiento del software.
