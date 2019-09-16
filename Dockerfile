FROM node:10

#----------Bundle app source--------
RUN mkdir -p /logs

RUN mkdir -p /usr/src/
WORKDIR /usr/src/
ADD . /usr/src/


#---------Install node modules------
RUN npm install .


CMD forever -c 'node --harmony' 'index.js'

