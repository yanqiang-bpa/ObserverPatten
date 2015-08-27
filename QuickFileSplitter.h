//
//  QuickFileSplitter.h
//  ObserverPatten
//
//  Created by yanqiang on 8/27/15.
//
//

#ifndef ObserverPatten_QuickFileSplitter_h
#define ObserverPatten_QuickFileSplitter_h
#include <time.h>
#include <unistd.h>
#include "FileSplitter.h"

class QuickFileSplitter:public FileSplitter
{
public:
    virtual void Split()
    {
        cout<<"This is QuickFileSplitter method"<<endl;
        const time_t start = time(NULL);
        time_t now = time(NULL);
        while(now - start <10)
        {
            sleep(1);
            now = time(NULL);
            int progress = now-start;
            cout<<"已完成"<<progress<<"0%"<<endl;
            OnProgress(progress*10);
            
        }
    }
};

#endif
