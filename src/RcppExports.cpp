// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// MaxDouble
double MaxDouble();
RcppExport SEXP mcga_MaxDouble() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(MaxDouble());
    return __result;
END_RCPP
}
// SizeOfDouble
int SizeOfDouble();
RcppExport SEXP mcga_SizeOfDouble() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(SizeOfDouble());
    return __result;
END_RCPP
}
// SizeOfInt
int SizeOfInt();
RcppExport SEXP mcga_SizeOfInt() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(SizeOfInt());
    return __result;
END_RCPP
}
// SizeOfLong
int SizeOfLong();
RcppExport SEXP mcga_SizeOfLong() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(SizeOfLong());
    return __result;
END_RCPP
}
// DoubleToBytes
IntegerVector DoubleToBytes(double x);
RcppExport SEXP mcga_DoubleToBytes(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    __result = Rcpp::wrap(DoubleToBytes(x));
    return __result;
END_RCPP
}
// DoubleVectorToBytes
IntegerVector DoubleVectorToBytes(DoubleVector d);
RcppExport SEXP mcga_DoubleVectorToBytes(SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type d(dSEXP);
    __result = Rcpp::wrap(DoubleVectorToBytes(d));
    return __result;
END_RCPP
}
// BytesToDouble
double BytesToDouble(IntegerVector x);
RcppExport SEXP mcga_BytesToDouble(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    __result = Rcpp::wrap(BytesToDouble(x));
    return __result;
END_RCPP
}
// ByteVectorToDoubles
DoubleVector ByteVectorToDoubles(IntegerVector b);
RcppExport SEXP mcga_ByteVectorToDoubles(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type b(bSEXP);
    __result = Rcpp::wrap(ByteVectorToDoubles(b));
    return __result;
END_RCPP
}
// OnePointCrossOver
List OnePointCrossOver(IntegerVector bytes1, IntegerVector bytes2, unsigned int cutpoint);
RcppExport SEXP mcga_OnePointCrossOver(SEXP bytes1SEXP, SEXP bytes2SEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type bytes1(bytes1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bytes2(bytes2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutpoint(cutpointSEXP);
    __result = Rcpp::wrap(OnePointCrossOver(bytes1, bytes2, cutpoint));
    return __result;
END_RCPP
}
// OnePointCrossOverOnDoublesUsingBytes
List OnePointCrossOverOnDoublesUsingBytes(DoubleVector d1, DoubleVector d2, unsigned int cutpoint);
RcppExport SEXP mcga_OnePointCrossOverOnDoublesUsingBytes(SEXP d1SEXP, SEXP d2SEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type d1(d1SEXP);
    Rcpp::traits::input_parameter< DoubleVector >::type d2(d2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutpoint(cutpointSEXP);
    __result = Rcpp::wrap(OnePointCrossOverOnDoublesUsingBytes(d1, d2, cutpoint));
    return __result;
END_RCPP
}
// TwoPointCrossOver
List TwoPointCrossOver(IntegerVector bytes1, IntegerVector bytes2, unsigned int cutpoint1, unsigned int cutpoint2);
RcppExport SEXP mcga_TwoPointCrossOver(SEXP bytes1SEXP, SEXP bytes2SEXP, SEXP cutpoint1SEXP, SEXP cutpoint2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type bytes1(bytes1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bytes2(bytes2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutpoint1(cutpoint1SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutpoint2(cutpoint2SEXP);
    __result = Rcpp::wrap(TwoPointCrossOver(bytes1, bytes2, cutpoint1, cutpoint2));
    return __result;
END_RCPP
}
// TwoPointCrossOverOnDoublesUsingBytes
List TwoPointCrossOverOnDoublesUsingBytes(DoubleVector d1, DoubleVector d2, unsigned int cutpoint1, unsigned int cutpoint2);
RcppExport SEXP mcga_TwoPointCrossOverOnDoublesUsingBytes(SEXP d1SEXP, SEXP d2SEXP, SEXP cutpoint1SEXP, SEXP cutpoint2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type d1(d1SEXP);
    Rcpp::traits::input_parameter< DoubleVector >::type d2(d2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutpoint1(cutpoint1SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutpoint2(cutpoint2SEXP);
    __result = Rcpp::wrap(TwoPointCrossOverOnDoublesUsingBytes(d1, d2, cutpoint1, cutpoint2));
    return __result;
END_RCPP
}

// UniformCrossOver
List UniformCrossOver(IntegerVector bytes1, IntegerVector bytes2);
RcppExport SEXP mcga_UniformCrossOver(SEXP bytes1SEXP, SEXP bytes2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type bytes1(bytes1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bytes2(bytes2SEXP);
    __result = Rcpp::wrap(UniformCrossOver(bytes1, bytes2));
    return __result;
END_RCPP
}
// UniformCrossOverOnDoublesUsingBytes
List UniformCrossOverOnDoublesUsingBytes(DoubleVector d1, DoubleVector d2);
RcppExport SEXP mcga_UniformCrossOverOnDoublesUsingBytes(SEXP d1SEXP, SEXP d2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type d1(d1SEXP);
    Rcpp::traits::input_parameter< DoubleVector >::type d2(d2SEXP);
    __result = Rcpp::wrap(UniformCrossOverOnDoublesUsingBytes(d1, d2));
    return __result;
END_RCPP
}
// ByteCodeMutation
IntegerVector ByteCodeMutation(IntegerVector bytes1, const double pmutation);
RcppExport SEXP mcga_ByteCodeMutation(SEXP bytes1SEXP, SEXP pmutationSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type bytes1(bytes1SEXP);
    Rcpp::traits::input_parameter< const double >::type pmutation(pmutationSEXP);
    __result = Rcpp::wrap(ByteCodeMutation(bytes1, pmutation));
    return __result;
END_RCPP
}
// ByteCodeMutationUsingDoubles
DoubleVector ByteCodeMutationUsingDoubles(DoubleVector d, const double pmutation);
RcppExport SEXP mcga_ByteCodeMutationUsingDoubles(SEXP dSEXP, SEXP pmutationSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type d(dSEXP);
    Rcpp::traits::input_parameter< const double >::type pmutation(pmutationSEXP);
    __result = Rcpp::wrap(ByteCodeMutationUsingDoubles(d, pmutation));
    return __result;
END_RCPP
}
// ByteCodeMutationUsingDoublesRandom
DoubleVector ByteCodeMutationUsingDoublesRandom(DoubleVector d, const double pmutation);
RcppExport SEXP mcga_ByteCodeMutationUsingDoublesRandom(SEXP dSEXP, SEXP pmutationSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type d(dSEXP);
    Rcpp::traits::input_parameter< const double >::type pmutation(pmutationSEXP);
    __result = Rcpp::wrap(ByteCodeMutationUsingDoublesRandom(d, pmutation));
    return __result;
END_RCPP
}
// EnsureBounds
void EnsureBounds(DoubleVector doubles, DoubleVector mins, DoubleVector maxs);
RcppExport SEXP mcga_EnsureBounds(SEXP doublesSEXP, SEXP minsSEXP, SEXP maxsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DoubleVector >::type doubles(doublesSEXP);
    Rcpp::traits::input_parameter< DoubleVector >::type mins(minsSEXP);
    Rcpp::traits::input_parameter< DoubleVector >::type maxs(maxsSEXP);
    EnsureBounds(doubles, mins, maxs);
    return R_NilValue;
END_RCPP
}
