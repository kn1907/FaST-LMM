int mmultfile_b_less_aatbx(char* a_filename, long long offset, long long row_count, long long a_col_count, long long b_col_count, double* b1, double* aaTb, double* aTb, int num_threads, long long log_frequency);
int mmultfile_atax(char* a_filename, long long offset, long long row_count, long long col_count, long long work_index, long long work_count, double* ata_piece, int num_threads, long long log_frequency);
//!!!cmk remove int post_svdx(long long work_count, char* G0_filename, long long iid_count, long* idx_array, long long idx_array_len, long long idx_sum, double* SVinv3b, double* U_data, long long U_sid_count, int num_threads, long long log_frequency);
//!!!cmk remove int post_svdx_read_piece(double*piece, char* G0_filename, long long work_index, long long work_count, long long iid_count, long long start_iid_index, long long stop_iid_index, long*idx_array, long long idx_array_len, long long log_frequency, long long idx_sum);