/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol UIScrollViewDelegate <NSObject>



@optional

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;

- (void)scrollViewDidScroll:(id)arg1;

- (void)scrollViewDidScrollToTop:(id)arg1;

- (void)scrollViewDidZoom:(id)arg1;

- (_Bool)scrollViewShouldScrollToTop:(id)arg1;

- (void)scrollViewWillBeginDecelerating:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

- (id)viewForZoomingInScrollView:(id)arg1;

@end

