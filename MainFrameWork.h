//
//  MainFrameWork.h
//  ObserverPatten
//
//  Created by yanqiang on 8/27/15.
//
//

#ifndef ObserverPatten_MainFrameWork_h
#define ObserverPatten_MainFrameWork_h
#include "QuickFileSplitter.h"
#include "FileSplitter.h"
#include "ProgressBar.h"

class MainFrameWork
{
//    TextBox* txtFilePath;
//    TextBox* txtFileNumber;
    ProgressBar* progressBar;
public:
    void Button1_Click()
    {
        FileSplitter* fs = new QuickFileSplitter();
        fs->Split();
    }
};

#endif
