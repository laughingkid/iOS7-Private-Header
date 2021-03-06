/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEditItemViewController.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class CalendarNotesCell, NSString, UITableView;



__attribute__((visibility("hidden")))

@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>

{

    UITableView *_table;

    CalendarNotesCell *_cell;

    NSString *_text;

}



- (void).cxx_destruct;

- (_Bool)becomeFirstResponder;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)loadView;

@property(copy) NSString *noteText;

- (struct CGSize)preferredContentSize;

- (_Bool)resignFirstResponder;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (_Bool)validateAllowingAlert:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;



@end


