/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UILabel;



__attribute__((visibility("hidden")))

@interface CalendarStoreGroupCell : UIView

{

    UILabel *_nameLabel;

    UILabel *_typeLabel;

    id <EKStyleProvider> _styleProvider;

}



+ (double)standardHeightForStyleProvider:(id)arg1;

- (void).cxx_destruct;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

- (void)layoutSubviews;

- (void)setStoreName:(id)arg1;

- (void)setStoreType:(id)arg1;



@end

