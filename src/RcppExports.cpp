// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getLPA
NumericMatrix getLPA(const NumericVector x, const IntegerVector iv, const int Nppp, const int lmax);
RcppExport SEXP mistral_getLPA(SEXP xSEXP, SEXP ivSEXP, SEXP NpppSEXP, SEXP lmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type iv(ivSEXP);
    Rcpp::traits::input_parameter< const int >::type Nppp(NpppSEXP);
    Rcpp::traits::input_parameter< const int >::type lmax(lmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(getLPA(x, iv, Nppp, lmax));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"mistral_getLPA", (DL_FUNC) &mistral_getLPA, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_mistral(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
