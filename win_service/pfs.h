#ifndef PHS_H_INCLUDED
#define PHS_H_INCLUDED


#ifndef debug
#   define debug(...) do {FILE *d=fopen("/tmp/pfs_srv.log", "a"); if (!d) break; fprintf(d, __VA_ARGS__); fclose(d);} while (0)
#endif

typedef struct
{
    const char * auth;
    const char * username;
    const char * pass;
    int use_ssl;
    size_t cache_size;
}pfs_params;

#endif // PHS_H_INCLUDED
