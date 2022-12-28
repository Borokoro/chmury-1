FROM ubuntu:latest
RUN apt-get -y update && apt-get install -y
RUN apt-get -y install clang
COPY Fib.cpp .
WORKDIR chmury1
RUN clang++ -o Fib Fib.cpp
CMD ["./Fib"]