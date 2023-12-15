#ifndef	PRINTREQUEST_H
#define	PRINTREQUEST_H
struct PrintRequest {
    int document_id;
    string document_name;
    PrintRequest* next;
};
#endif
