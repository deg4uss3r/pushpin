FROM --platform=linux/amd64 ubuntu:20.04

ENV TZ=US \
    DEBIAN_FRONTEND=noninteractive

RUN apt-get -qq update && apt-get install -y git pkg-config curl make g++ libssl-dev libzmq3-dev qtbase5-dev libboost-dev

# install toolchain
RUN curl https://sh.rustup.rs -sSf | \
    sh -s -- --default-toolchain stable -y

ENV PATH=/root/.cargo/bin:$PATH

RUN cargo install --version 0.17.6 --locked cargo-audit

RUN rustup component add rustfmt

RUN rustup component add clippy

RUN rustup default stable