// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parse_curves
Rcpp::List parse_curves(std::vector<std::string> const& lines, Rcpp::CharacterVector const& curve_names, Rcpp::CharacterVector const& format, std::string delim, std::string null_str, int first_line, int last_line);
RcppExport SEXP _lasr_parse_curves(SEXP linesSEXP, SEXP curve_namesSEXP, SEXP formatSEXP, SEXP delimSEXP, SEXP null_strSEXP, SEXP first_lineSEXP, SEXP last_lineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type lines(linesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector const& >::type curve_names(curve_namesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector const& >::type format(formatSEXP);
    Rcpp::traits::input_parameter< std::string >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< std::string >::type null_str(null_strSEXP);
    Rcpp::traits::input_parameter< int >::type first_line(first_lineSEXP);
    Rcpp::traits::input_parameter< int >::type last_line(last_lineSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_curves(lines, curve_names, format, delim, null_str, first_line, last_line));
    return rcpp_result_gen;
END_RCPP
}
// trim_ws
std::string trim_ws(std::string s);
RcppExport SEXP _lasr_trim_ws(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(trim_ws(s));
    return rcpp_result_gen;
END_RCPP
}
// parse_header
Rcpp::DataFrame parse_header(std::vector<std::string> const& lines, int first_line, int last_line);
RcppExport SEXP _lasr_parse_header(SEXP linesSEXP, SEXP first_lineSEXP, SEXP last_lineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type lines(linesSEXP);
    Rcpp::traits::input_parameter< int >::type first_line(first_lineSEXP);
    Rcpp::traits::input_parameter< int >::type last_line(last_lineSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_header(lines, first_line, last_line));
    return rcpp_result_gen;
END_RCPP
}
// get_header_double
double get_header_double(Rcpp::DataFrame& header, std::string mnem, double default_val);
RcppExport SEXP _lasr_get_header_double(SEXP headerSEXP, SEXP mnemSEXP, SEXP default_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type header(headerSEXP);
    Rcpp::traits::input_parameter< std::string >::type mnem(mnemSEXP);
    Rcpp::traits::input_parameter< double >::type default_val(default_valSEXP);
    rcpp_result_gen = Rcpp::wrap(get_header_double(header, mnem, default_val));
    return rcpp_result_gen;
END_RCPP
}
// get_header_int
int get_header_int(Rcpp::DataFrame& header, std::string mnem, int default_val);
RcppExport SEXP _lasr_get_header_int(SEXP headerSEXP, SEXP mnemSEXP, SEXP default_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type header(headerSEXP);
    Rcpp::traits::input_parameter< std::string >::type mnem(mnemSEXP);
    Rcpp::traits::input_parameter< int >::type default_val(default_valSEXP);
    rcpp_result_gen = Rcpp::wrap(get_header_int(header, mnem, default_val));
    return rcpp_result_gen;
END_RCPP
}
// get_header_string
std::string get_header_string(Rcpp::DataFrame& header, std::string mnem);
RcppExport SEXP _lasr_get_header_string(SEXP headerSEXP, SEXP mnemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type header(headerSEXP);
    Rcpp::traits::input_parameter< std::string >::type mnem(mnemSEXP);
    rcpp_result_gen = Rcpp::wrap(get_header_string(header, mnem));
    return rcpp_result_gen;
END_RCPP
}
// read_las_cpp
Rcpp::List read_las_cpp(std::vector<std::string>& lines, bool header_only, bool logs_only);
RcppExport SEXP _lasr_read_las_cpp(SEXP linesSEXP, SEXP header_onlySEXP, SEXP logs_onlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type lines(linesSEXP);
    Rcpp::traits::input_parameter< bool >::type header_only(header_onlySEXP);
    Rcpp::traits::input_parameter< bool >::type logs_only(logs_onlySEXP);
    rcpp_result_gen = Rcpp::wrap(read_las_cpp(lines, header_only, logs_only));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lasr_parse_curves", (DL_FUNC) &_lasr_parse_curves, 7},
    {"_lasr_trim_ws", (DL_FUNC) &_lasr_trim_ws, 1},
    {"_lasr_parse_header", (DL_FUNC) &_lasr_parse_header, 3},
    {"_lasr_get_header_double", (DL_FUNC) &_lasr_get_header_double, 3},
    {"_lasr_get_header_int", (DL_FUNC) &_lasr_get_header_int, 3},
    {"_lasr_get_header_string", (DL_FUNC) &_lasr_get_header_string, 2},
    {"_lasr_read_las_cpp", (DL_FUNC) &_lasr_read_las_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_lasr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
