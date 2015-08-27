//
//  IFileSplitter.h
//  ObserverPatten
//
//  Created by yanqiang on 8/27/15.
//
//

#ifndef ObserverPatten_IFileSplitter_h
#define ObserverPatten_IFileSplitter_h
#include "ProgressBar.h"
class IFileSplitter
{
public:
    ProgressBar progressBar;
    virtual void OnProgress(int p)
    {
        progressBar.setProgress(p);
    }
};

#endif
