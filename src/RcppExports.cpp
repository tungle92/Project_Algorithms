// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cost_rcpp
double cost_rcpp(NumericVector x, String changetype);
RcppExport SEXP _Changepoints_cost_rcpp(SEXP xSEXP, SEXP changetypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type changetype(changetypeSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_rcpp(x, changetype));
    return rcpp_result_gen;
END_RCPP
}
// OP_rcpp
IntegerVector OP_rcpp(NumericVector x, double beta, String changetype);
RcppExport SEXP _Changepoints_OP_rcpp(SEXP xSEXP, SEXP betaSEXP, SEXP changetypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< String >::type changetype(changetypeSEXP);
    rcpp_result_gen = Rcpp::wrap(OP_rcpp(x, beta, changetype));
    return rcpp_result_gen;
END_RCPP
}
// PELT_rcpp
List PELT_rcpp(NumericVector x, double beta, String changetype);
RcppExport SEXP _Changepoints_PELT_rcpp(SEXP xSEXP, SEXP betaSEXP, SEXP changetypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< String >::type changetype(changetypeSEXP);
    rcpp_result_gen = Rcpp::wrap(PELT_rcpp(x, beta, changetype));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Changepoints_cost_rcpp", (DL_FUNC) &_Changepoints_cost_rcpp, 2},
    {"_Changepoints_OP_rcpp", (DL_FUNC) &_Changepoints_OP_rcpp, 3},
    {"_Changepoints_PELT_rcpp", (DL_FUNC) &_Changepoints_PELT_rcpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_Changepoints(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
