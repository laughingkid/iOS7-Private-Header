/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableDictionary, NSString, NSURL, SUClientInterface, SUGradient, SUPageSectionGroup, SUSearchFieldConfiguration, UIColor, UIImage;



@interface SUSection : NSObject

{

    SUClientInterface *_clientInterface;

    NSMutableDictionary *_dictionary;

    UIImage *_image;

    UIImage *_moreListImage;

    SUSearchFieldConfiguration *_searchFieldConfiguration;

    NSMutableDictionary *_sectionButtonImages;

    UIImage *_selectedImage;

    UIImage *_selectedMoreListImage;

}



- (id)_colorForKey:(id)arg1;

- (id)_imageBaseName;

- (long long)_minimumNetworkTypeFromDictionary:(id)arg1;

- (id)_sectionButtonsForKey:(id)arg1;

- (long long)_typeForString:(id)arg1;

@property(readonly, nonatomic) SUGradient *backgroundGradient;

- (void)dealloc;

@property(readonly, nonatomic) long long defaultPNGStyle;

- (id)description;

@property(readonly, nonatomic) NSString *identifier;

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

- (id)imageForSectionButtonWithTag:(long long)arg1;

- (id)initWithClientInterface:(id)arg1;

@property(readonly, nonatomic, getter=isDefaultSection) _Bool defaultSection;

@property(readonly, nonatomic, getter=isTransient) _Bool transient;

@property(readonly, nonatomic, getter=isUsingLocalArtwork) _Bool usingLocalArtwork;

@property(readonly, nonatomic) NSArray *itemImages;

@property(readonly, nonatomic) NSArray *leftSectionButtons;

- (_Bool)loadFromDictionary:(id)arg1 searchField:(id)arg2;

@property(readonly, nonatomic) UIColor *loadingIndicatorColor;

@property(readonly, nonatomic) UIColor *loadingTextColor;

@property(readonly, nonatomic) UIColor *loadingTextShadowColor;

@property(readonly, nonatomic) long long minimumNetworkType;

@property(retain, nonatomic) UIImage *moreListImage; // @synthesize moreListImage=_moreListImage;

@property(readonly, nonatomic) SUPageSectionGroup *pageSectionGroup;

@property(readonly, nonatomic) NSString *partnerHeader;

@property(readonly, nonatomic) NSArray *rightSectionButtons;

@property(retain, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration; // @synthesize searchFieldConfiguration=_searchFieldConfiguration;

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;

@property(retain, nonatomic) UIImage *selectedMoreListImage; // @synthesize selectedMoreListImage=_selectedMoreListImage;

- (void)setSectionButtonImage:(id)arg1 forTag:(long long)arg2;

@property(readonly, nonatomic) NSString *title;

@property(readonly, nonatomic) long long type;

@property(readonly, nonatomic) NSURL *url;

@property(readonly, nonatomic) NSString *urlBagKey;

- (id)valueForProperty:(id)arg1;



@end

