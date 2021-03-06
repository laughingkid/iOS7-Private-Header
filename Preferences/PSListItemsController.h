/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSListController.h"


@class PSSpecifier;



@interface PSListItemsController : PSListController

{

    long long _rowToSelect;

    _Bool _deferItemSelection;

    _Bool _restrictionList;

    PSSpecifier *_lastSelectedSpecifier;

}



- (void)_addStaticText:(id)arg1;

- (void)dealloc;

- (void)didLock;

- (_Bool)isRestrictionList;

- (id)itemsFromDataSource;

- (id)itemsFromParent;

- (void)listItemSelected:(id)arg1;

- (void)prepareSpecifiersMetadata;

- (void)scrollToSelectedCell;

- (void)setIsRestrictionList:(_Bool)arg1;

- (void)setRowToSelect;

- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;

- (id)specifiers;

- (void)suspend;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


