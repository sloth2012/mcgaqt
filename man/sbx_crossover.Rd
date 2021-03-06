% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/oplibrary.R
\name{sbx_crossover}
\alias{sbx_crossover}
\title{Performs sbx (simulated binary) crossover operation on a pair of two selected parent candidate solutions}
\usage{
sbx_crossover(object, parents, ...)
}
\arguments{
\item{object}{A \code{GA::ga} object}

\item{parents}{Indices of the selected parents}

\item{...}{Additional arguments to be passed to the function}
}
\value{
List of two generated offspring
}
\description{
This function is not called directly but is given as a parameter in \code{GA::ga} function. 
In \code{GA::ga}, if the parameter \code{crossover=} is set to \code{sbx_crossover} than
the sbx crossover operator is applied in the genetic search. sbx_crossover mimics the classical single-point crossover operator
in binary genetic algorithms.
}
\examples{
f <- function(x){ 
  return(-sum( (x-5)^2 ) )
}
myga <- ga(type="real-valued", fitness = f, popSize = 100, maxiter = 100, 
           min = rep(-50,5), max = rep(50,5), crossover = sbx_crossover)
print(myga@solution)
}
\author{
Mehmet Hakan Satman - mhsatman@istanbul.edu.tr
}
\references{
Deb, Kalyanmoy, and Ram Bhushan Agrawal. "Simulated binary crossover for continuous search space." Complex systems 9.2 (1995): 115-148.
}

