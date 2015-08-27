//
//  FileSplitter.h
//  ObserverPatten
//
//  Created by yanqiang on 8/27/15.
//
//

#ifndef ObserverPatten_FileSplitter_h
#define ObserverPatten_FileSplitter_h

#include<string>
#include<iostream>
#include "ProgressBar.h"
#include "IFileSplitter.h"
using namespace std;

class FileSplitter:public IFileSplitter
{
    string filePath;
    int fileNumber;
public:
    virtual void Split()=0;
    virtual ~FileSplitter(){cout<<"FileSplitter was deconstucted."<<endl;}
    
    void OnProgress(int p)
    {
        progressBar.setProgress(p);
    }
};

#endif
