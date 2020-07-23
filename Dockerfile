FROM debian:latest

ENV LD_LIBRARY_PATH "usr/local/lib":$LD_LIBRARY_PATH
ENV SHELL /bin/bash

RUN DEBIAN_FRONTEND=noninteractive apt-get update && apt-get install -y \
    --no-install-recommends build-essential gdb git vim ca-certificates gcc-multilib \
    python libsdl1.2-dev libtool-bin libglib2.0-dev libz-dev libpixman-1-dev locales && \
    sed -i -e 's/# en_US.UTF-8 UTF-8/en_US.UTF-8 UTF-8/' /etc/locale.gen && \
    dpkg-reconfigure --frontend=noninteractive locales && update-locale LANG=en_US.UTF-8 && \
    git clone https://github.com/k0Iry/6.828-qemu.git qemu && \
    cd qemu && ./configure --disable-kvm --disable-werror --target-list="i386-softmmu x86_64-softmmu" \
    && make -j 4 && make install && cd .. && rm -rf qemu && sed -i '9,12 s/^#//' /root/.bashrc

VOLUME /usr/src/app
WORKDIR /usr/src/app
USER nobody

CMD ["/bin/bash"]
