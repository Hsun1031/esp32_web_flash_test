FROM mcr.microsoft.com/devcontainers/python:1-3.12-bullseye

USER vscode
WORKDIR /home/vscode

RUN python3 -m pip install -U platformio
RUN /home/vscode/.local/bin/pio remote update || true

RUN echo "export PATH=\$PATH:/home/vscode/.local/bin" >> /home/vscode/.bashrc

RUN mkdir -p /home/vscode/web-flash-server

# download https://github.com/esp-rs/esp-web-flash-server/releases/download/v0.2.1/web-flash-x86_64-unknown-linux-gnu.zip
RUN wget https://github.com/esp-rs/esp-web-flash-server/releases/download/v0.2.1/web-flash-x86_64-unknown-linux-gnu.zip
RUN unzip web-flash-x86_64-unknown-linux-gnu.zip -d /home/vscode/web-flash-server
RUN rm web-flash-x86_64-unknown-linux-gnu.zip

RUN chmod +x /home/vscode/web-flash-server/web-flash

RUN echo "export PATH=\$PATH:/home/vscode/web-flash-server" >> /home/vscode/.bashrc

CMD [ "/bin/bash" ]
