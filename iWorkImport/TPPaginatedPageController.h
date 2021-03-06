/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TPPageController.h"


#import "TSKChangeSourceObserver.h"



@class TPTextWrapController;



__attribute__((visibility("hidden")))

@interface TPPaginatedPageController : TPPageController <TSKChangeSourceObserver>

{

    TPTextWrapController *_wrapController;

}



- (struct CGSize)canvasSizeToFitAllPages;

- (void)d_toggleWrapAnimation;

- (void)dealloc;

- (id)initWithDocumentRoot:(id)arg1;

- (_Bool)isPaginated;

- (unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1;

- (Class)p_pageInfoClass;

- (struct _NSRange)p_pageRangeAffectedByInfo:(id)arg1;

- (void)p_performWithCachedPageLayouts:(id)arg1;

- (void)p_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(_Bool)arg3;

- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint)arg1;

- (struct CGPoint)pageOriginForPageIndex:(unsigned long long)arg1;

- (struct CGRect)pageRectForPageIndex:(unsigned long long)arg1;

- (struct CGSize)pageSize;

- (void)processHeaderFooterPropertyChanged:(id)arg1 changeSource:(id)arg2;

- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;

- (void)teardown;

- (id)textWrapper;



@end


