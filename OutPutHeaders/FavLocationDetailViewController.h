/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "QMapViewDelegate.h"
#import "IScanStreetViewMgrExt.h"
#import "FavLocRemarkDelegate.h"
#import "FavlocationLabelViewDelegate.h"
#import "MMUIViewController.h"
#import "FavTagViewDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "WeChat-Structs.h"
#import "ILocationMgrExt.h"
#import "NavigateLogicControllerDelegate.h"

@class QMapView, FavoritesItem, FavForwardLogicController, NSString, NSURL, UIButton, MMHeadImageAnnotation, FavLocationLabelView, NavigateLogicController;

@interface FavLocationDetailViewController : MMUIViewController <FavTagViewDelegate, QMapViewDelegate, ILocationMgrExt, FavLocRemarkDelegate, WCActionSheetDelegate, FavForwardLogicDelegate, NavigateLogicControllerDelegate, IScanStreetViewMgrExt, FavlocationLabelViewDelegate> {
	FavoritesItem* m_favItem;
	QMapView* m_mapView;
	FavLocationLabelView* m_locLabelView;
	XXStruct_gLbvpC m_location;
	double m_scale;
	NSString* m_nsPoiName;
	NSString* m_nsLocation;
	NSString* m_nsUserName;
	NSURL* m_streetViewUrl;
	BOOL m_bLoadFinish;
	int mapLocationTag;
	unsigned long m_headingTag;
	double m_trueHeading;
	MMHeadImageAnnotation* m_myselfAnnotation;
	UIButton* m_myLocationButton;
	UIButton* m_streetButton;
	FavForwardLogicController* m_favForwardController;
	NavigateLogicController* m_navigateLogicController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)getFavForawrdViewController;
-(void)onHeadingError:(int)error withTag:(unsigned long)tag;
-(void)onHeadingChanged:(id)changed withTag:(unsigned long)tag;
-(void)stopUpdateTrueHeading;
-(void)startUpdateTrueHeading;
-(void)onPresentViewControlelr:(id)controlelr Animated:(BOOL)animated;
-(void)onStopLoading;
-(void)onStartLoading;
-(void)onFavTagEditOK;
-(void)onFavLocReamrkComplete:(id)complete;
-(void)onEditFavTag;
-(void)onEditFavRemark;
-(id)getLocationText:(XXStruct_gLbvpC)text;
-(void)onFavTagEditBegin:(int)begin;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onAction:(id)action;
-(void)onOpenStreetView:(id)view;
-(id)getUserLocation;
-(void)navigateTo:(id)to Name:(id)name Sender:(id)sender;
-(void)onNavigateToPOI:(id)poi;
-(void)setAnnotation:(id)annotation Coordinate:(XXStruct_gLbvpC)coordinate Animated:(BOOL)animated Duration:(float)duration;
-(BOOL)isOnUserLocation:(XXStruct_gLbvpC)location;
-(void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;
-(id)mapView:(id)view viewForOverlay:(id)overlay;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)onMyLocationButtonClick;
-(void)addAnotation:(XXStruct_gLbvpC)anotation;
-(void)hideLoactionLabelView;
-(void)showLocationLabelView;
-(void)showLocationCalloutView;
-(void)OnSendStreetViewLocation:(id)location Err:(int)err;
-(void)openStreetView;
-(void)startGetStreetViewUrl;
-(void)startGetLocation;
-(void)reloadStreetBtn;
-(void)initView;
-(void)initData;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(id)initWithFavItem:(id)favItem;
-(void)dealloc;
@end

