# sudo docker build -t system_health_check .
# sudo docker run -d -p 1024:1024 --rm -it system_health_check
FROM ubuntu:16.04

RUN apt-get update

RUN useradd -d /home/ctf/ -m -p ctf -s /bin/bash ctf
RUN echo "ctf:ctf" | chpasswd

WORKDIR /home/ctf

COPY close_me .
COPY flag.txt .
COPY hello.txt .
COPY ynetd .

RUN chown -R root:root /home/ctf
RUN chmod +x close_me
RUN chmod +x ynetd
USER ctf
EXPOSE 1337
CMD ./ynetd -p 1337 ./close_me
