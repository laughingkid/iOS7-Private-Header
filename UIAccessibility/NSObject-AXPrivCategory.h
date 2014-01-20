/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSObject (AXPrivCategory)

+ (id)_accessibilityTextChecker;

- (_Bool)__accessibilityReadAllOnFocus;

- (_Bool)__accessibilitySupportsActivateAction;

- (void)__accessibilityUnregister:(void *)arg1 shouldRelease:(_Bool)arg2;

- (struct CGPoint)__accessibilityVisibleScrollArea:(_Bool)arg1;

- (float)_accessibilityActivationDelay;

- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;

- (void)_accessibilityAddTrait:(unsigned long long)arg1;

- (id)_accessibilityAllCustomRotorItemsAtIndex:(long long)arg1;

- (id)_accessibilityAllCustomRotorTitles;

- (double)_accessibilityAllowedGeometryOverlap;

- (_Bool)_accessibilityAllowsAlternativeCharacterActivation;

- (_Bool)_accessibilityAlwaysOrderedFirst;

- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;

- (id)_accessibilityAncestorIsAccessibilityElementsHidden;

- (id)_accessibilityAncestorIsKindOf:(Class)arg1;

- (_Bool)_accessibilityAnimationsInProgress;

- (void)_accessibilityAnnouncementComplete:(id)arg1;

- (id)_accessibilityAppSwitcherApps;

- (id)_accessibilityApplication;

- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;

- (id)_accessibilityAutomaticIdentifier;

- (_Bool)_accessibilityBackingElementIsValid;

- (id)_accessibilityBaseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (_Bool)_accessibilityBookShowsDualPages;

- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;

- (id)_accessibilityBriefLabel;

- (id)_accessibilityBundleIdentifier;

- (_Bool)_accessibilityCameraIrisOpen;

- (_Bool)_accessibilityCanDeleteTableViewCell;

- (_Bool)_accessibilityCanDismissPopoverController:(id)arg1;

- (_Bool)_accessibilityCanPerformAction:(int)arg1;

- (_Bool)_accessibilityCanPerformEscapeAction;

- (_Bool)_accessibilityCanScrollInAtLeastOneDirection;

- (void)_accessibilityChangeToKeyplane:(id)arg1;

- (struct CGRect)_accessibilityClassicModeFrame:(struct CGRect)arg1;

- (struct CGRect)_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect)arg2;

- (long long)_accessibilityCompareGeometryForViewOrDictionary:(id)arg1;

- (_Bool)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;

- (id)_accessibilityContainerForAccumulatingCustomRotorItems;

- (id)_accessibilityContainerInDirection:(_Bool)arg1 originalElement:(id)arg2;

- (id)_accessibilityContainingParentForOrdering;

- (struct CGRect)_accessibilityContentFrame;

- (struct UIEdgeInsets)_accessibilityContentInset;

- (unsigned int)_accessibilityContextId;

- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;

- (id)_accessibilityControlDescendantWithTarget:(id)arg1;

- (struct CGRect)_accessibilityConvertFrameForRemoteView:(struct CGRect)arg1 orientation:(long long)arg2;

- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;

- (void)_accessibilityCut;

- (id)_accessibilityDOMAttributes;

- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;

- (unsigned long long)_accessibilityDatePickerComponentType;

- (id)_accessibilityDateTimePickerValues;

- (void)_accessibilityDecreaseSelection:(id)arg1;

- (void)_accessibilityDelete;

- (id)_accessibilityDescendantOfType:(Class)arg1;

- (_Bool)_accessibilityDidDeleteTableViewCell;

- (_Bool)_accessibilityDidSetOpaqueElementProvider;

- (_Bool)_accessibilityDispatchKeyboardAction:(id)arg1;

- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;

- (_Bool)_accessibilityElementShouldBeInvalid;

- (id)_accessibilityElementStoredUserLabel;

- (id)_accessibilityElementsForSearchParameter:(id)arg1;

- (void)_accessibilityEnumerateAllCustomRotorTitlesWithAccumulator:(id *)arg1 usingBlock:(id)arg2;

- (id)_accessibilityEquivalenceTag;

- (id)_accessibilityFindAncestor:(id)arg1 startWithSelf:(void)arg2;

- (id)_accessibilityFindAnyAXDescendant:(id)arg1 byAddingElements:(void)arg2;

- (id)_accessibilityFindDescendant:(id)arg1;

- (id)_accessibilityFindElementInDirection:(int)arg1 searchTraits:(unsigned long long)arg2 allowOutOfBoundsChild:(_Bool)arg3;

- (void)_accessibilityFindSearchResult:(_Bool)arg1 withString:(id)arg2;

- (id)_accessibilityFindSubviewDescendant:(id)arg1;

- (id)_accessibilityFirstElementForFocus;

- (id)_accessibilityFirstOpaqueElement;

- (id)_accessibilityFirstVisibleItem;

- (id)_accessibilityFuzzyHitTestElements;

- (struct CGRect)_accessibilityGesturePracticeRegion;

- (void)_accessibilityHandleATFocused:(_Bool)arg1;

- (_Bool)_accessibilityHandlePublicScroll:(long long)arg1;

- (_Bool)_accessibilityHandwritingActivateKeyboardDeleteKey;

- (_Bool)_accessibilityHandwritingActivateKeyboardReturnKey;

- (id)_accessibilityHandwritingAncestor;

- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;

- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;

- (int)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(long long)arg1;

- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;

- (int)_accessibilityHandwritingAttributePreferredCharacterSet;

- (int)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(long long)arg1;

- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;

- (_Bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;

- (id)_accessibilityHandwritingAttributes;

- (_Bool)_accessibilityHasDescendantOfType:(Class)arg1;

- (_Bool)_accessibilityHasOrderedChildren;

- (_Bool)_accessibilityHasTextOperations;

- (_Bool)_accessibilityHasVariantKeys;

- (id)_accessibilityHeaderElement;

- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (_Bool)_accessibilityHitTestReverseOrder;

- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;

- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;

- (_Bool)_accessibilityHitTestsStatusBar;

- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;

- (_Bool)_accessibilityIgnoresScrollParentOffsetForSorting;

- (_Bool)_accessibilityIncludeDuringContentReading;

- (void)_accessibilityIncreaseSelection:(id)arg1;

- (long long)_accessibilityIndexForPickerString:(id)arg1;

- (id)_accessibilityInputIdentifierForKeyboard;

- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;

- (_Bool)_accessibilityIsAwayAlertElement;

- (_Bool)_accessibilityIsAwayAlertElementNew;

- (_Bool)_accessibilityIsDescendantOfElement:(id)arg1;

- (_Bool)_accessibilityIsEscapable;

- (_Bool)_accessibilityIsFirstElementForFocus;

- (_Bool)_accessibilityIsFirstSibling;

- (_Bool)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;

- (_Bool)_accessibilityIsFrameOutOfBounds;

- (_Bool)_accessibilityIsInAppSwitcher;

- (_Bool)_accessibilityIsInTableCell;

- (_Bool)_accessibilityIsLastSibling;

- (_Bool)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;

- (_Bool)_accessibilityIsMainWindow;

- (_Bool)_accessibilityIsMap;

- (_Bool)_accessibilityIsMathTouchExplorationView;

- (_Bool)_accessibilityIsNotFirstElement;

- (_Bool)_accessibilityIsScrollAncestor;

- (_Bool)_accessibilityIsScrollable;

- (_Bool)_accessibilityIsTableCell;

- (_Bool)_accessibilityIsTitleElement;

- (_Bool)_accessibilityIsTouchContainer;

- (_Bool)_accessibilityIsTourGuideRunning;

- (_Bool)_accessibilityIsUserInteractionEnabled;

- (_Bool)_accessibilityIsVisible;

- (_Bool)_accessibilityIterateParentsForTestBlock:(id)arg1;

- (void)_accessibilityIterateScrollParentsUsingBlock:(id)arg1;

- (void)_accessibilityIterateScrollParentsUsingBlock:(id)arg1 includeSelf:(void)arg2;

- (void)_accessibilityJumpToTableIndex:(id)arg1;

- (_Bool)_accessibilityKeyboardKeyAllowsTouchTyping;

- (id)_accessibilityKeyboardKeyForString:(id)arg1;

- (_Bool)_accessibilityLanguageOverriddesUser;

- (_Bool)_accessibilityLastHitTestNearBorder;

- (id)_accessibilityLastOpaqueElement;

- (id)_accessibilityLaunchableApps;

- (id)_accessibilityLineEndMarker:(id)arg1;

- (long long)_accessibilityLineEndPosition;

- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;

- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;

- (id)_accessibilityLineStartMarker:(id)arg1;

- (long long)_accessibilityLineStartPosition;

- (void)_accessibilityLoadAccessibilityInformation;

- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint)arg1;

- (int)_accessibilityMapFeatureType;

- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;

- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;

- (id)_accessibilityMarkersForPoints:(id)arg1;

- (id)_accessibilityMarkersForRange:(struct _NSRange)arg1;

- (struct CGPoint)_accessibilityMaxScrubberPosition;

- (double)_accessibilityMaxValue;

- (struct CGPoint)_accessibilityMinScrubberPosition;

- (double)_accessibilityMinValue;

- (void)_accessibilityMoveSelectionToMarker:(id)arg1;

- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;

- (id)_accessibilityNextMarker:(id)arg1;

- (id)_accessibilityObjectForTextMarker:(id)arg1;

- (_Bool)_accessibilityObscuresScreen;

- (_Bool)_accessibilityOnlyComparesByXAxis;

- (id)_accessibilityOpaqueElementParent;

- (_Bool)_accessibilityOpaqueElementProvider;

- (_Bool)_accessibilityOpaqueElementScrollsContentIntoView;

- (id)_accessibilityOpaqueElementsFrom:(id)arg1 direction:(int)arg2 searchTraits:(unsigned long long)arg3;

- (_Bool)_accessibilityOverridesInstructionsHint;

- (_Bool)_accessibilityOverridesInvalidFrames;

- (_Bool)_accessibilityOverridesInvisibility;

- (id)_accessibilityPageContent;

- (long long)_accessibilityPageControlCount;

- (long long)_accessibilityPageControlIndex;

- (id)_accessibilityPageTextMarkerRange;

- (id)_accessibilityParentForFindingScrollParent;

- (id)_accessibilityParentView;

- (void)_accessibilityPaste;

- (_Bool)_accessibilityPerformEscape;

- (_Bool)_accessibilityPerformLabelling:(id)arg1;

- (id)_accessibilityPhotoDescription;

- (int)_accessibilityPickerType;

- (void)_accessibilityPlayKeyboardClickSound;

- (void)_accessibilityPlaySystemSound:(int)arg1;

- (void)_accessibilityPostAnnouncement:(id)arg1;

- (void)_accessibilityPostNotificationHelper:(id)arg1;

- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;

- (id)_accessibilityPreviousMarker:(id)arg1;

- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;

- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;

- (_Bool)_accessibilityReadAllContinuesWithScroll;

- (_Bool)_accessibilityReadAllOnFocus;

- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;

- (void)_accessibilityReplace;

- (void)_accessibilityReplaceCharacterAtCursor:(id)arg1;

- (void)_accessibilityResetContainerElements;

- (_Bool)_accessibilityRespectsTableScrollEnabledFlag;

- (id)_accessibilityResponderElement;

- (_Bool)_accessibilityRetainsCustomRotorActionSetting;

- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;

- (_Bool)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;

- (id)_accessibilityScrollAncestor;

- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;

- (void)_accessibilityScrollDownPage;

- (void)_accessibilityScrollLeftPage;

- (_Bool)_accessibilityScrollNextPage;

- (void)_accessibilityScrollOpaqueElementIntoView:(int)arg1 previousScroller:(id)arg2;

- (id)_accessibilityScrollParent;

- (_Bool)_accessibilityScrollPreviousPage;

- (void)_accessibilityScrollRightPage;

- (id)_accessibilityScrollStatus;

- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;

- (void)_accessibilityScrollToPoint:(struct CGPoint)arg1;

- (_Bool)_accessibilityScrollToVisible;

- (void)_accessibilityScrollUpPage;

- (_Bool)_accessibilityScrollingEnabled;

- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(int)arg2 searchTraits:(unsigned long long)arg3 allowOutOfBoundsChild:(_Bool)arg4;

- (void)_accessibilitySelect;

- (void)_accessibilitySelectAll;

- (struct _NSRange)_accessibilitySelectedNSRangeForObject;

- (struct _NSRange)_accessibilitySelectedTextRange;

- (_Bool)_accessibilitySelfFoundByHitTesting;

- (_Bool)_accessibilityServesAsContainingParentForOrdering;

- (_Bool)_accessibilityServesAsFirstElement;

- (_Bool)_accessibilityServesAsFirstResponder;

- (void)_accessibilitySetAllowedGeometryOverlap:(double)arg1;

- (void)_accessibilitySetAnimationsInProgress:(_Bool)arg1;

- (void)_accessibilitySetCameraIrisOpen:(_Bool)arg1;

- (void)_accessibilitySetCurrentGesture:(id)arg1;

- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;

- (void)_accessibilitySetIgnoresScrollParentOffsetForSorting:(_Bool)arg1;

- (void)_accessibilitySetIsTourGuideRunning:(_Bool)arg1;

- (void)_accessibilitySetOverridesInvisibility:(_Bool)arg1;

- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;

- (void)_accessibilitySetSortPriority:(long long)arg1;

- (void)_accessibilitySetValue:(id)arg1;

- (void)_accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;

- (void)_accessibilitySetWantsOpaqueElementProviders:(_Bool)arg1;

- (_Bool)_accessibilityShouldAnnounceFontInfo;

- (_Bool)_accessibilityShouldAttemptScrollToFrameOnParentView;

- (_Bool)_accessibilityShouldAvoidAnnouncing;

- (_Bool)_accessibilityShouldReleaseAfterUnregistration;

- (_Bool)_accessibilityShouldSpeakMathEquationTrait;

- (_Bool)_accessibilityShouldSpeakScrollStatusOnEntry;

- (_Bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;

- (_Bool)_accessibilitySortCollectionViewLogically;

- (long long)_accessibilitySortPriority;

- (long long)_accessibilitySortPriorityWithReturningView:(id *)arg1;

- (id)_accessibilitySortedElementsWithin;

- (id)_accessibilityStatusBar;

- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;

- (id)_accessibilitySupplementaryFooterViews;

- (id)_accessibilitySupplementaryHeaderViews;

- (id)_accessibilitySupportGesturesAttributes;

- (id)_accessibilitySupportedLanguages;

- (_Bool)_accessibilitySupportsActivateAction;

- (_Bool)_accessibilitySupportsHandwriting;

- (_Bool)_accessibilitySupportsMultipleCustomRotorTitles;

- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;

- (_Bool)_accessibilityTableCellUsesDetailTextAsValue;

- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 andColumn:(long long)arg2;

- (id)_accessibilityTextChecker;

- (struct CGRect)_accessibilityTextCursorFrame;

- (id)_accessibilityTextMarkerForPosition:(long long)arg1;

- (id)_accessibilityTextMarkerRange;

- (id)_accessibilityTextMarkerRangeForSelection;

- (_Bool)_accessibilityTextOperationAction:(id)arg1;

- (id)_accessibilityTextOperations;

- (id)_accessibilityTextViewTextOperationResponder;

- (id)_accessibilityTouchContainer;

- (_Bool)_accessibilityTriggerDictationFromPath:(id)arg1;

- (id)_accessibilityUnignoredDescendant;

- (void)_accessibilityUnregister;

- (id)_accessibilityUpcomingRoadForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;

- (_Bool)_accessibilityUpdatesOnActivationAfterDelay;

- (id)_accessibilityUserTestingVisibleCells;

- (id)_accessibilityUserTestingVisibleSections;

- (_Bool)_accessibilityUsesScrollParentForOrdering;

- (_Bool)_accessibilityUsesSpecialKeyboardDismiss;

- (id)_accessibilityValueForRange:(struct _NSRange *)arg1;

- (id)_accessibilityVariantKeys;

- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;

- (id)_accessibilityViewController;

- (struct CGRect)_accessibilityVisibleFrame;

- (id)_accessibilityVisibleItemInList;

- (struct CGPoint)_accessibilityVisiblePoint;

- (struct CGPoint)_accessibilityVisiblePointHitTestingAnyElement:(_Bool)arg1;

- (struct CGPoint)_accessibilityVisibleScrollArea:(_Bool)arg1;

- (_Bool)_accessibilityWantsOpaqueElementProviders;

- (_Bool)_accessibilityWebSearchResultsActive;

- (_Bool)_accessibilityWindowVisible;

- (id)_accessibiltyAvailableKeyplanes;

- (_Bool)_allowCustomActionHintSpeakOverride;

- (id)_axDebugTraits;

- (id)_axSuperviews;

- (void)_setAccessibilityIsMainWindow:(_Bool)arg1;

- (void)_setAccessibilityIsNotFirstElement:(_Bool)arg1;

- (void)_setAccessibilityObscuresScreen:(_Bool)arg1;

- (void)_setAccessibilityServesAsFirstElement:(_Bool)arg1;

- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(_Bool)arg1;

- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(_Bool)arg1;

- (void)_setAccessibilityWindowVisible:(_Bool)arg1;

- (_Bool)accessibilityActivate;

- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;

- (id)accessibilityAttributeValue:(int)arg1;

- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;

- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;

- (struct _NSRange)accessibilityColumnRange;

- (long long)accessibilityCompareGeometry:(id)arg1;

- (id)accessibilityContainerElements;

- (id)accessibilityContentForLineNumber:(long long)arg1;

- (id)accessibilityCustomActions;

- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;

- (id)accessibilityCustomRotorTitles;

- (void)accessibilityDecrement;

- (_Bool)accessibilityEditOperationAction:(id)arg1;

- (id)accessibilityElementAtIndex:(long long)arg1;

- (long long)accessibilityElementCount;

- (void)accessibilityElementDidBecomeFocused;

- (void)accessibilityElementDidLoseFocus;

- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;

- (_Bool)accessibilityElementIsFocused;

- (void)accessibilityEnumerateContainerElementsUsingBlock:(id)arg1;

- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;

- (id)accessibilityFlowToElements;

- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;

- (id)accessibilityHeaderElements;

- (id)accessibilityHitTest:(struct CGPoint)arg1;

- (id)accessibilityIdentification;

- (void)accessibilityIncrement;

- (id)accessibilityInvalidStatus;

- (_Bool)accessibilityIsComboBox;

- (_Bool)accessibilityIsWindow;

- (id)accessibilityLabelForRange:(struct _NSRange *)arg1;

- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;

- (id)accessibilityLinkedElement;

- (id)accessibilityMathEquation;

- (id)accessibilityMathMLSource;

- (id)accessibilityMenuActions;

- (id)accessibilityPageContent;

- (_Bool)accessibilityPerformCustomAction:(long long)arg1;

- (id)accessibilityPlaceholderValue;

- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;

- (_Bool)accessibilityRequired;

- (struct _NSRange)accessibilityRowRange;

- (void)accessibilityScrollDownPage;

- (_Bool)accessibilityScrollDownPageSupported;

- (void)accessibilityScrollLeftPage;

- (_Bool)accessibilityScrollLeftPageSupported;

- (void)accessibilityScrollRightPage;

- (_Bool)accessibilityScrollRightPageSupported;

- (_Bool)accessibilityScrollToTopSupported;

- (void)accessibilityScrollUpPage;

- (_Bool)accessibilityScrollUpPageSupported;

- (id)accessibilitySecondaryLabel;

- (void)accessibilitySetIdentification:(id)arg1;

- (_Bool)accessibilityShouldEnumerateContainerElementsArrayDirectly;

- (id)accessibilitySpeechHint;

- (_Bool)accessibilityStartStopToggle;

- (id)accessibilityStringForTextMarkers:(id)arg1;

- (id)accessibilityTitleElement;

- (id)accessibilityURL;

- (id)accessibilityUserDefinedIsMainWindow;

- (id)accessibilityUserDefinedNotFirstElement;

- (id)accessibilityUserDefinedServesAsFirstElement;

- (id)accessibilityUserDefinedSize;

- (id)accessibilityUserDefinedWindowVisible;

- (id)accessibilityViewWithIdentifier:(id)arg1;

- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;

- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;

- (long long)indexOfAccessibilityElement:(id)arg1;

- (_Bool)isAccessibilityOpaqueElementProvider;

- (id)isAccessibilityUserDefinedScrollAncestor;

- (id)isAccessibilityUserDefinedWindow;

- (void)setAccessibilitySize:(struct CGSize)arg1;

- (void)setIsAccessibilityOpaqueElementProvider:(_Bool)arg1;

- (void)setIsAccessibilityScrollAncestor:(_Bool)arg1;

- (void)setIsAccessibilityWindow:(_Bool)arg1;

@end

