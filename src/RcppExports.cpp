// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// make_family_id
IntegerVector make_family_id(const IntegerVector& id, const IntegerVector& fid, const IntegerVector& mid);
RcppExport SEXP _networkR_make_family_id(SEXP idSEXP, SEXP fidSEXP, SEXP midSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type id(idSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type fid(fidSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type mid(midSEXP);
    rcpp_result_gen = Rcpp::wrap(make_family_id(id, fid, mid));
    return rcpp_result_gen;
END_RCPP
}
// create_kinship
void create_kinship(const IntegerVector& famid, const IntegerVector& id, const IntegerVector& fid, const IntegerVector& mid, const IntegerVector& sex);
RcppExport SEXP _networkR_create_kinship(SEXP famidSEXP, SEXP idSEXP, SEXP fidSEXP, SEXP midSEXP, SEXP sexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type famid(famidSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type id(idSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type fid(fidSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type mid(midSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type sex(sexSEXP);
    create_kinship(famid, id, fid, mid, sex);
    return R_NilValue;
END_RCPP
}
// kinship
arma::sp_mat kinship(IntegerVector id, IntegerVector fid, IntegerVector mid);
RcppExport SEXP _networkR_kinship(SEXP idSEXP, SEXP fidSEXP, SEXP midSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type fid(fidSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mid(midSEXP);
    rcpp_result_gen = Rcpp::wrap(kinship(id, fid, mid));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_networkR_make_family_id", (DL_FUNC) &_networkR_make_family_id, 3},
    {"_networkR_create_kinship", (DL_FUNC) &_networkR_create_kinship, 5},
    {"_networkR_kinship", (DL_FUNC) &_networkR_kinship, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_networkR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
