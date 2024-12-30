# KVC

## 1 Description
A fast SSR connector between a Vue front-end, a
C++ server, and a custom key-value database

License: MIT

Branches: 1
## 2 How to Access
Find the KVC-SSR repository on GitHub. Navigate
to the link provided on the right-hand side. Then
type in the command: ./script.sh. Answer the favorite color prompt 
and press ENTER. The website should appear with the background color being your
favorite color! It will also show previous color inputs,
if applicable.
## 3 Structure
### 3.1 First Run
After C++ receives color input, it writes Vue syntax
with the input color into the Vue file, and then uses
the input to write CSS syntax that makes the web-
site background take on the same color as the input.
The input is stored into a custom database,
completing the first run
### 3.2 Second Run
On the second run, C++ extracts the previous data
from the data.kvdb file and includes it in the Vue
markup. Towards the end, C++ extracts the first
input color from the KVDB file and writes it into the
file along with the second input color to prevent data
loss.

### 3.3 Third Run
Now on the third run, when C++ extracts the data
from the KVDB file, both previous colors will be
present in the markup. The amount of data will continue 
growing each time the C++ file is ran.

## 4 Code of Conduct
Any user who forks this repository must abide by the
following rules
1. Do not create a website using this template that
- Is discriminatory or racist
- Shows disregard for the poor or marginalized
- Is intended to be used for committing a crime
2. Any repository that breaks these regulations will
be promptly reported

## Signature
![signature](sig.png)
