// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LFFImageHDR.h instead.

#import <BaseTen/BaseTen.h>


@class LFFImageHDR;
@class LFFCameraSettings;







@interface LFFImageHDRID : NSManagedObjectID {}
@end

@interface _LFFImageHDR : BXDatabaseObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (LFFImageHDRID*)objectID;



@property (nonatomic, retain) NSDate *time;

//- (BOOL)validateTime:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *thumbnailURL;

//- (BOOL)validateThumbnailURL:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSData *histogram;

//- (BOOL)validateHistogram:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSData *pixels;

//- (BOOL)validatePixels:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *url;

//- (BOOL)validateUrl:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) LFFImageHDR* imageHDR;
//- (BOOL)validateImageHDR:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) LFFCameraSettings* cameraSettings;
//- (BOOL)validateCameraSettings:(id*)value_ error:(NSError**)error_;




@end

@interface _LFFImageHDR (CoreDataGeneratedAccessors)

@end

@interface _LFFImageHDR (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveTime;
- (void)setPrimitiveTime:(NSDate*)value;




- (NSString*)primitiveThumbnailURL;
- (void)setPrimitiveThumbnailURL:(NSString*)value;




- (NSData*)primitiveHistogram;
- (void)setPrimitiveHistogram:(NSData*)value;




- (NSData*)primitivePixels;
- (void)setPrimitivePixels:(NSData*)value;




- (NSString*)primitiveUrl;
- (void)setPrimitiveUrl:(NSString*)value;





- (LFFImageHDR*)primitiveImageHDR;
- (void)setPrimitiveImageHDR:(LFFImageHDR*)value;



- (LFFCameraSettings*)primitiveCameraSettings;
- (void)setPrimitiveCameraSettings:(LFFCameraSettings*)value;


@end
