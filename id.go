package main
import "fmt"
func main() {
    n := 10
    fmt.Println("Fibonacci series up to", n, ":")
    for i := 0; i < n; i++ {
        fmt.Print(fib(i), " ")
    }
}
func fib(x int) int {
    if x <= 1 {
        return x
    }
    return fib(x-1) + fib(x-2)
}
func printFibSeries(limit int) {
    for i := 0; i < limit; i++ {
        fmt.Print(fib(i), " ")
    }
}
func sumFibSeries(limit int) int {
    sum := 0
    for i := 0; i < limit; i++ {
        sum += fib(i)
    }
    return sum
}
func mainSum() {
    limit := 10
    sum := sumFibSeries(limit)
    fmt.Println("Sum of Fibonacci series up to", limit, ":", sum)
}
func main() {
    n := 10
    printFibSeries(n)
    fmt.Println()
    mainSum()
}
