FROM alpine
WORKDIR chmury1
COPY Fib.cpp .
RUN g++ -o Fib Fib.cpp
CMD ["./Fib"]
