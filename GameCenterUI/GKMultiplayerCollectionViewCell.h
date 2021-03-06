/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewCell.h"



@class GKLabel, GKMultiplayerParticipant, UIButton;



@interface GKMultiplayerCollectionViewCell : UICollectionViewCell

{

    GKMultiplayerParticipant *_participant;

    UIButton *_addButton;

    UIButton *_removeButton;

    GKLabel *_nameLabel;

    GKLabel *_statusLabel;

}



+ (id)reuseIdentifier;

@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;

- (void)addPressed;

- (void)dealloc;

- (id)description;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;

@property(copy, nonatomic) GKMultiplayerParticipant *participant; // @synthesize participant=_participant;

- (void)participantChanged;

- (id)placeholderImageForParticipant:(id)arg1;

- (void)prepareForReuse;

@property(nonatomic) _Bool removable; // @dynamic removable;

@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;

- (void)removePressed;

@property(retain, nonatomic) GKLabel *statusLabel; // @synthesize statusLabel=_statusLabel;



@end


