/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "QLRemotePrintPageHelper.h"


@class NSMutableArray, UIWebBrowserView, UIWebPaginationInfo;



@interface QLSpreadsheetPrintPageRenderer : QLRemotePrintPageHelper

{

    UIWebBrowserView *_printView;

    UIWebPaginationInfo *_paginationInfo;

    _Bool _frameLoaded;

    NSMutableArray *_urls;

    unsigned long long _currentURLIndex;

    unsigned long long _currentPageIndex;

    long long _totalPagesPrinted;

    _Bool _printingDone;

}



- (id)_documentURLs;

- (_Bool)_loadNextURL;

- (_Bool)_loadURLAtIndex:(unsigned long long)arg1;

- (void)dealloc;

- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (long long)numberOfPages;

- (id)pdfDataForPageAtIndex:(long long)arg1 withSize:(struct CGSize)arg2 printingDone:(_Bool *)arg3;

- (void)prepareForDrawingPages:(struct _NSRange)arg1;

- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;



@end

