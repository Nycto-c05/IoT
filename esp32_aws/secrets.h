#ifndef SECRETS_H
#define SECRETS_H

#include <pgmspace.h>

#define SECRET
#define THINGNAME "test"

const char WIFI_SSID[] = "Yeshu";
const char WIFI_PASSWORD[] = "75156411";
const char AWS_IOT_ENDPOINT[] = "a3ajz21s0dnzor-ats.iot.ap-south-1.amazonaws.com";

// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

// Device Certificate                                               
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWTCCAkGgAwIBAgIUMCus18BgFdcouYTxizbyEK7AOnQwDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTI0MTEwOTEzNDky
OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAM15dhHxLex3+pipQz1H
JWisZWD+n3TZDn9IlwPF3LN8nBw3kwLFSJ86n1zpCSMHj+hNTKyln1ImOvA8B3oV
eUwuf7qlt947HCKpMCNSfBICM/GHuuidZ/pfWaKSU+guqijlmqFvp+kN8KPJBQvA
9apSWALhFRn4TQgfB5BdtSdkCwGvQcG3F7Q2TKepAwxsjuIs/kis2jTlHpuremPp
zSkOvpoyBhcwmJqwNGAz2GzYAHChhYFbWmT61vgO6zB49jH13uT7PX4LmdN/s970
c2rTA1Qz7jDuW1OYH+pACCmMZBhweW5LPgZhXMGUzoAXmcUgYDjKqhKeMNcjEX/H
hzECAwEAAaNgMF4wHwYDVR0jBBgwFoAUSBGlDvsUB9alBu+a7u2QHryRSIwwHQYD
VR0OBBYEFLCLU1cX0sPe9kGJoN0fAG4dGCsWMAwGA1UdEwEB/wQCMAAwDgYDVR0P
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQC+9u9BbcQOcS9xQ3VA7UWhMR+a
dwARIVgrmyj9vJI99pNjSuNRF0aTpdRCYSVG48ZpvwWgbKyqOj/DOY9s2e8A3b+w
5XT9pvaS2b8u/MsReGnDga+qsduekrHjUFZ985+DJGzYn63ftUPbjGjTPpUGxGKG
JsWMCzLoI2O3+bh9LZ1T4o091BfS/E77BZNSsZBg5dLBaJcZjHUBGBqkwppvNBkR
x+WC72OR/StWESiwhUZb976aKvmGuhNweU57uNFh95WpSmDQYbMyx56dj6OXbh7K
5+v8s7U6f3bR0wrgc4MkqcrtARXTlm28Ai9A23nzxBg9kDPAZVjTbia/otg7
-----END CERTIFICATE-----

)KEY";

// Device Private Key                                               
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEpgIBAAKCAQEAzXl2EfEt7Hf6mKlDPUclaKxlYP6fdNkOf0iXA8Xcs3ycHDeT
AsVInzqfXOkJIweP6E1MrKWfUiY68DwHehV5TC5/uqW33jscIqkwI1J8EgIz8Ye6
6J1n+l9ZopJT6C6qKOWaoW+n6Q3wo8kFC8D1qlJYAuEVGfhNCB8HkF21J2QLAa9B
wbcXtDZMp6kDDGyO4iz+SKzaNOUem6t6Y+nNKQ6+mjIGFzCYmrA0YDPYbNgAcKGF
gVtaZPrW+A7rMHj2MfXe5Ps9fguZ03+z3vRzatMDVDPuMO5bU5gf6kAIKYxkGHB5
bks+BmFcwZTOgBeZxSBgOMqqEp4w1yMRf8eHMQIDAQABAoIBAQC5R8VH+IrIqIe4
ESkooHcDJDFmfTOcUf3YmMRUCp8w2jSK3TIbVXpe2qXJSfmLNM53UvzI0bAQi5ip
9/dmBucR4vwaekSKiBKezqExuLdYJdRg/1tzVjzkcAaLqhcvTqTxq9j7qYtng8Jy
blm2d5EOvKHQNtaoTFZp9FEFxPoNQXMdwG0zDPAGWuB6lE1V2ir4CS+3XxexZD8v
lCznusZWBzlbPljfVCrea9+Y/6AY44iBHc4Txs0113/M4+pRgpKLUYn+MUIZzcvM
NJkEIRMUPwKDpd7oy4AVMhyhNtcTOEL6uEDs9i2Ya7CSbtrvgO5rAxHbJAqAWJyV
Dg8aoy3hAoGBAO5L2tkzKD1WPdKXPuJJf1CLXQFGisq/K0n+6yuS1NCcj6lb6WLt
WOL6xTROegSND79qTJonJp/uG4YH+mEzd0NZ7tpL4/ufNNZqET3ll5kYWddNylbD
OsNA5+XdaihWhCGh1qoQbCNPjmA8aHS7C+QhjhUHNpXXI5vJX4U5gjAzAoGBANy9
XohJRcBTmJcU7wg3TU4QKqXqrSvo8DPUOFXD+8zk4OImguj4OpJwKw1bGEsw019U
AICJjxIoQNjNjBqVBN6NtVi+H5umSBjdEzmZ4Lhn819febH6+0H8XFpD7DDxosvT
He+BHriBsRbMFLE/SyNXUq4J8RHkM+7bMKj3WbcLAoGBAODNir4Qtst2iogayuYr
NAJGFw1XASRXyHzcEftfX4kVyamZ3cjH5Gzs6hF4Xz/f25VWsMFUYenKdQiyihAc
v0w4kU46/e6ouO31ziI4cBWrlUW6S0Iil1MP7jU59iXryGb6CEsThxCgws4i7uAA
fS1QQnuv/FzLQvp6tLQ4FotlAoGBAMOSoHvdd4hESLCrInFEFiDw3+hquQ1rb85r
25HZd3H842ZbOqdQrwxphytpJ2gPFWejlGJN/k3XDkVIMDapC0xnf2Hl6TlNpRkq
Xkstk9WufAlnHPpc5Vp8ThLHlS90F4nBPgeifeZ5Ob56CGdWLatdRere8hCpAH5D
A6TgqkMrAoGBAJ4wGQsFHFfL+jLa7SWkvl/LRk81SIoZ3vKPfEU4BgzeQBGLwLAH
p4cbNm/5TRPXVpdSBZIkv3pxKe1S4Ll1R3estOWKwkFlaaJqGIOQ7syZIrP1fe/o
sbWAfAd7oyryXyzteONrvXigwwZRGEwrbpSr9b0/Z4RlhKQbJEbMh1/L
-----END RSA PRIVATE KEY-----

)KEY";

#endif