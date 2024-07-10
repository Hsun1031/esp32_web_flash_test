FROM mcr.microsoft.com/devcontainers/python:1-3.12-bullseye

USER vscode
WORKDIR /home/vscode

RUN pip3 install -U platformio
RUN pio upgrade
RUN pio remote update || true

# download file
RUN wget https://github.com/esp-rs/esp-web-flash-server/releases/download/v0.2.1/web-flash-x86_64-unknown-linux-gnu.zip
RUN unzip web-flash-x86_64-unknown-linux-gnu.zip
RUN rm web-flash-x86_64-unknown-linux-gnu.zip

CMD [ "/bin/bash" ]
