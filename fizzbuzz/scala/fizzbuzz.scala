object fizzbuzz {

  def fizzbuzz(n:Int) = {
    println((n % 3, n % 5) match {
      case (0, 0) => "FizzBuzz"
      case (0, _) => "Fizz"
      case (_, 0) => "Buzz"
      case _ => n
    })
  }

  def main(args: Array[String]) {
    (1 until 100).map(fizzbuzz _)
  }
}
