/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDRep.h"


#import "TSDContainerRep.h"

#import "TSKHighlightArrayControllerProtocol.h"

#import "TSWPTextEditingHostRep.h"



@class NSArray, NSObject<TSDContainerInfo>, NSObject<TSKSearchReference>, TSKHighlightArrayController, TSWPShapeRep;



__attribute__((visibility("hidden")))

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol>

{

    TSWPShapeRep *_editingRep;

    TSKHighlightArrayController *_pulseArrayController;

    TSKHighlightArrayController *_highlightArrayController;

    NSObject<TSKSearchReference> *_activeSearchReference;

    NSArray *_searchReferences;

}



@property(retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;

- (void)addAdditionalChildLayersToArray:(id)arg1;

- (_Bool)canSelectChildRep:(id)arg1;

- (id)childReps;

@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;

- (void)dealloc;

- (_Bool)doesRepContainSearchReference:(id)arg1;

- (void)drawTextBackground:(struct CGContext *)arg1 insetRect:(struct CGRect)arg2 pulsating:(_Bool)arg3;

@property(retain, nonatomic) TSKHighlightArrayController *highlightArrayController; // @synthesize highlightArrayController=_highlightArrayController;

- (id)hitRep:(struct CGPoint)arg1;

- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (id)lineSearchReferencesForSearchReference:(id)arg1;

- (struct CGPath *)newPathForSearchReference:(id)arg1;

- (id)overlayLayers;

- (void)p_activeFindHighlightChangedNotification:(id)arg1;

- (void)p_findUIStateChangedNotification:(id)arg1;

- (void)p_setActiveSearchReference:(id)arg1;

- (void)p_setSearchReferencesToHighlight:(id)arg1;

- (void)pulseAnimationDidStop:(id)arg1;

@property(retain, nonatomic) TSKHighlightArrayController *pulseArrayController; // @synthesize pulseArrayController=_pulseArrayController;

- (void)recursivelyPerformSelector:(SEL)arg1;

- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;

- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;

- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;

- (void)selectChildRep:(id)arg1;

- (void)setPulseControllerActive:(_Bool)arg1 autohide:(_Bool)arg2;

- (void)tswpTextEditingDidEndEditing:(id)arg1;

- (void)updateChildrenFromLayout;

- (void)updateFindAnimationWithAnimatingPulse:(_Bool)arg1;

- (void)updateHighlights;

@property(readonly, nonatomic) _Bool useFindOverlayers;

- (void)willBeRemoved;



@end

