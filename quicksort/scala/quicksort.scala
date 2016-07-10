import scala.language.postfixOps

object Quicksort {
  def sort(xs: Array[Int]): Array[Int] = {
    if (xs.length <= 1) {
      xs
    }
    else {
      val pivot = xs(xs.length / 2)
      Array.concat(
        sort(xs filter (pivot >)),
        xs filter (pivot ==),
        sort(xs filter (pivot <)))
    }
  }

  def main(args: Array[String]) {
    var x = sort((10 to 1 by -1).toArray)
    println(x.deep.mkString(","))
  }
}

