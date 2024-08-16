FROM ubuntu:latest
RUN apt-get update && apt-get install -y g++
COPY app /cw-portal-bin
WORKDIR /cw-portal-bin/app/out


