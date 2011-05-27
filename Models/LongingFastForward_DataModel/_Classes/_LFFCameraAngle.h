// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LFFCameraAngle.h instead.

#import <BaseTen/BaseTen.h>


@class LFFCameraProfile;
@class LFFCaptureClient;
@class LFFCaptureSession;
@class LFFCameraDevice;
@class LFFCameraSettings;



@interface LFFCameraAngleID : NSManagedObjectID {}
@end

@interface _LFFCameraAngle : BXDatabaseObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (LFFCameraAngleID*)objectID;



@property (nonatomic, retain) NSString *name;

//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) LFFCameraProfile* defaultProfile;
//- (BOOL)validateDefaultProfile:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) LFFCaptureClient* client;
//- (BOOL)validateClient:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSSet* captureSessions;
- (NSMutableSet*)captureSessionsSet;



@property (nonatomic, retain) LFFCameraDevice* device;
//- (BOOL)validateDevice:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) LFFCameraSettings* settings;
//- (BOOL)validateSettings:(id*)value_ error:(NSError**)error_;




@property (nonatomic, readonly) NSArray *currentRecordingSession;

@end

@interface _LFFCameraAngle (CoreDataGeneratedAccessors)

- (void)addCaptureSessions:(NSSet*)value_;
- (void)removeCaptureSessions:(NSSet*)value_;
- (void)addCaptureSessionsObject:(LFFCaptureSession*)value_;
- (void)removeCaptureSessionsObject:(LFFCaptureSession*)value_;

@end

@interface _LFFCameraAngle (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;





- (LFFCameraProfile*)primitiveDefaultProfile;
- (void)setPrimitiveDefaultProfile:(LFFCameraProfile*)value;



- (LFFCaptureClient*)primitiveClient;
- (void)setPrimitiveClient:(LFFCaptureClient*)value;



- (NSMutableSet*)primitiveCaptureSessions;
- (void)setPrimitiveCaptureSessions:(NSMutableSet*)value;



- (LFFCameraDevice*)primitiveDevice;
- (void)setPrimitiveDevice:(LFFCameraDevice*)value;



- (LFFCameraSettings*)primitiveSettings;
- (void)setPrimitiveSettings:(LFFCameraSettings*)value;


@end
