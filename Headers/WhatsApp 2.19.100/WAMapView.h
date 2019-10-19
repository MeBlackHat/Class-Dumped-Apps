//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MKMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAStaticPinControllerDelegate-Protocol.h"

@class CLGeocoder, CLLocation, CLPlacemark, MKMapCamera, MKMapView, MKUserLocation, NSArray, NSString, UITapGestureRecognizer, WA2DMapButton, WAInfoButton, WAMapButtonMenu, WAMapViewGestureRecognizer, WAStaticPinButton, WAUserTrackingButton;
@protocol MKMapViewDelegate><WAMapViewDelegate, WAStaticPinController;

@interface WAMapView : UIView <UIGestureRecognizerDelegate, MKMapViewDelegate, WAStaticPinControllerDelegate>
{
    CLGeocoder *_geocoder;
    CLLocation *_geocodeLocation;
    id <WAStaticPinController> _staticPinController;
    _Bool _showPinOnAnnotationDeselect;
    _Bool _locationDataReceived;
    _Bool _mapViewCallbackReceived;
    _Bool _processingCustomMapGesture;
    _Bool _animatingMapToUserLocation;
    CDStruct_02837cd9 _userLocationMapRect;
    MKMapCamera *_savedCamera;
    WAMapButtonMenu *_mapButtonMenu;
    WAUserTrackingButton *_buttonUserTracking;
    WAStaticPinButton *_buttonStaticPin;
    WA2DMapButton *_button2DMap;
    WAInfoButton *_buttonInfo;
    WAMapViewGestureRecognizer *_gestureRecognizer;
    UITapGestureRecognizer *_doubleTapGesture;
    UITapGestureRecognizer *_doubleFingerTapGesture;
    _Bool _disableRecenterDefaultLocation;
    UIView *_shade;
    long long _geocodingCount;
    _Bool _map3DModeEnabled;
    _Bool _staticPinEnabled;
    _Bool _staticPinCalloutHidden;
    _Bool _doNotHighlightStaticPinCallout;
    _Bool _mapMovedByUser;
    _Bool _tracksUserLocation;
    _Bool _showsInfoButton;
    _Bool _hideStaticPinCalloutWhileGeocoding;
    NSString *_staticPinTitle;
    id <MKMapViewDelegate><WAMapViewDelegate> _delegate;
    CLPlacemark *_geocodePlacemark;
    MKMapView *_mapView;
    struct UIEdgeInsets _mapInset;
}

+ (_Bool)gestureRecognizerIsTilt:(id)arg1;
@property(nonatomic) _Bool hideStaticPinCalloutWhileGeocoding; // @synthesize hideStaticPinCalloutWhileGeocoding=_hideStaticPinCalloutWhileGeocoding;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) CLPlacemark *geocodePlacemark; // @synthesize geocodePlacemark=_geocodePlacemark;
@property(nonatomic) _Bool showsInfoButton; // @synthesize showsInfoButton=_showsInfoButton;
@property(nonatomic) _Bool tracksUserLocation; // @synthesize tracksUserLocation=_tracksUserLocation;
@property(nonatomic) __weak id <MKMapViewDelegate><WAMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets mapInset; // @synthesize mapInset=_mapInset;
@property(nonatomic) _Bool mapMovedByUser; // @synthesize mapMovedByUser=_mapMovedByUser;
@property(copy, nonatomic) NSString *staticPinTitle; // @synthesize staticPinTitle=_staticPinTitle;
@property(nonatomic) _Bool doNotHighlightStaticPinCallout; // @synthesize doNotHighlightStaticPinCallout=_doNotHighlightStaticPinCallout;
@property(nonatomic, getter=isStaticPinCalloutHidden) _Bool staticPinCalloutHidden; // @synthesize staticPinCalloutHidden=_staticPinCalloutHidden;
@property(nonatomic, getter=isStaticPinEnabled) _Bool staticPinEnabled; // @synthesize staticPinEnabled=_staticPinEnabled;
@property(nonatomic, getter=isMap3DModeEnabled) _Bool map3DModeEnabled; // @synthesize map3DModeEnabled=_map3DModeEnabled;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)staticPinControllerCalloutTapped:(id)arg1;
- (void)staticPinControllerPinDropped:(id)arg1;
- (void)staticPinButtonAction:(id)arg1;
@property(nonatomic) _Bool staticPinIgnoresInsets;
@property(nonatomic) struct CGPoint staticPinPosition;
- (void)setStaticPinHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isStaticPinHidden) _Bool staticPinHidden;
- (void)shadeTapped:(id)arg1;
- (void)adjustCalloutViewForAnnotationView:(id)arg1;
- (void)didReverseGeocodeCurrentLocation:(id)arg1 duration:(double)arg2;
- (void)startReverseGeocodingForCurrentLocation;
@property(readonly, nonatomic) _Bool isGeocoding;
- (_Bool)staticPinReadyForCallout;
- (void)changeUserTrackingModeAction:(id)arg1;
- (void)infoButtonAction:(id)arg1;
- (void)updateUserTrackingState;
- (void)reloadStateOfUserTrackingButton;
- (id)viewForAnnotation:(id)arg1;
@property(readonly, nonatomic) CDStruct_26e8d939 region;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) unsigned long long mapType;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)visibleMapRect;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *selectedAnnotations;
- (void)addAnnotations:(id)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (void)addAnnotation:(id)arg1;
@property(nonatomic) _Bool showsUserLocation;
@property(readonly, nonatomic) MKUserLocation *userLocation;
- (void)handleDoubleFingerTapGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)reloadGestureRecognizers;
- (void)reload3DMapButtonVisibilityAndState;
- (void)resetPitch:(id)arg1;
- (void)setShows3DMap:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isShowing3DMap;
- (void)restoreMapRegionAnimated:(_Bool)arg1 zoomToAnnotations:(id)arg2;
- (void)saveMapRegion;
- (void)setMapInset:(struct UIEdgeInsets)arg1 moveMap:(_Bool)arg2;
- (void)zoomToUserLocationAnimated:(_Bool)arg1 resetZoomLevel:(_Bool)arg2;
- (CDStruct_c3b9c2ee)staticPinPoint;
- (struct CLLocationCoordinate2D)centerCoordinateForLocation:(struct CLLocationCoordinate2D)arg1 givenSize:(CDStruct_c3b9c2ee)arg2;
- (struct CLLocationCoordinate2D)centerCoordinateForUserLocationGivenSize:(CDStruct_c3b9c2ee)arg1;
- (void)zoomToLocation:(id)arg1 radius:(double)arg2;
- (void)setLocation:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setMapButtonsHidden:(_Bool)arg1;
- (void)enterStickerMode;
- (void)sendCenterPinLocation;
- (void)setStaticPinAlpha:(double)arg1;
- (_Bool)shouldHaveStaticPinButton;
- (_Bool)useNewStaticPin;
- (_Bool)instantDrag;
- (id)wa_userLocationView;
- (void)layoutSubviews;
- (double)sideButtonInset;
- (double)topButtonInset;
- (_Bool)topAlignButtons;
@property(readonly, nonatomic) double buttonsHeight;
- (void)map2dButtonWillToggle;
- (void)add2DButton;
- (void)mapGestureRecognizer:(id)arg1;
- (void)configure;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

