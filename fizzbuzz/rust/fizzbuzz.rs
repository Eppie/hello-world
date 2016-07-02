fn fizzbuzz(n: i32) {
    for x in 1..n + 1 {
        match (x % 3, x % 5) {
            (0, 0) => println!("FizzBuzz"),
            (0, _) => println!("Fizz"),
            (_, 0) => println!("Buzz"),
            _ => println!("{}", x),
        }
    }
}

fn main() {
    fizzbuzz(100);
}
