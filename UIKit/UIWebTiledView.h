/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class WAKWindow;



@interface UIWebTiledView : UIView

{

    WAKWindow *_wakWindow;

    int _inGestureType;

    int _tilingArea;

    _Bool _didFirstTileLayout;

    _Bool _layoutTilesInMainThread;

    _Bool _tilingModeIsLocked;

    _Bool _allowsPaintingAndScriptsWhilePanning;

    _Bool _editingTilingModeEnabled;

}



- (void)_didScroll;

- (void)_screenChanged:(id)arg1;

- (void)_updateForScreen:(id)arg1;

- (unsigned int)adjustedMaxTileCount;

- (_Bool)allowsPaintingAndScriptsWhilePanning;

- (void)dealloc;

- (void)drawImageIntoTiles:(struct CGImage *)arg1;

- (_Bool)drawsGrid;

- (void)dumpTiles;

- (_Bool)editingTilingModeEnabled;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isTilingEnabled;

- (_Bool)keepsZoomedOutTiles;

- (void)layoutSubviews;

- (_Bool)layoutTilesInMainThread;

- (void)layoutTilesNow;

- (void)layoutTilesNowForRect:(struct CGRect)arg1;

- (void)layoutTilesNowOnWebThread;

- (void)lockTilingMode;

- (_Bool)logsTilingChanges;

- (unsigned int)maxTileCount;

- (void)removeAllNonVisibleTiles;

- (void)removeAllTiles;

- (void)removeForegroundTiles;

- (void)setAllowsPaintingAndScriptsWhilePanning:(_Bool)arg1;

- (void)setDrawsGrid:(_Bool)arg1;

- (void)setEditingTilingModeEnabled:(_Bool)arg1;

- (void)setInGesture:(int)arg1;

- (void)setKeepsZoomedOutTiles:(_Bool)arg1;

- (void)setLayoutTilesInMainThread:(_Bool)arg1;

- (void)setLogsTilingChanges:(_Bool)arg1;

- (void)setMaxTileCount:(unsigned int)arg1;

- (void)setNeedsDisplay;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;

- (void)setNeedsLayout;

- (void)setTileDrawingEnabled:(_Bool)arg1;

- (void)setTileSize:(struct CGSize)arg1;

- (void)setTilesOpaque:(_Bool)arg1;

- (void)setTilingArea:(int)arg1;

- (void)setTilingEnabled:(_Bool)arg1;

- (void)setTransform:(struct CGAffineTransform)arg1;

- (void)setWAKWindow:(id)arg1;

- (_Bool)tileDrawingEnabled;

- (struct CGSize)tileSize;

- (_Bool)tilesOpaque;

- (int)tilingArea;

- (void)unlockTilingMode;

- (void)updateTilingMode;

- (struct CGRect)visibleRect;

- (id)wakWindow;

- (void)willMoveToWindow:(id)arg1;



@end


