#include <stdlib.h>
#include <al.h>
#include <alc.h>


#include "../audio/audio.h"
#include "../utypes.h"

static ALCdevice *dev[2];

static ALCcontext *ctx;

static ALuint source, buffers[3];

static char data[5000];

static ALuint buf;

ALint val;

struct al_context {
    ALCdevice* device;
    ALCcontext* context;
    char* name;
} al_context;


OCLEnum open_al_device(struct al_context* context){
    context -> device = alcOpenDevice(context -> name);

    return OCL_STATUS_OK;
}

OCLEnum oclaOpenDevice(OCLFloat sampleRate){
    struct al_context* context = (struct al_context*) calloc(1, sizeof(al_context));
    
    if(context == NULL){
        return OCL_MEMORY_ISSUE;
    }

    OCLEnum error = open_al_device(context);
    if(error != 0){

    }
}

void dump_error(OCLEnum error, char* info){
    printf("Oculsus Audio (OclSA) Error Dump\n");

    switch (error)
    {
    case OCL_MEMORY_ISSUE:
        printf("Memory issue detected, possible issue is dynamic allocated memory is null.\n");
        printf("Additional information from host: %s", info);
        break;
    
    default:
        break;
    }
}

void oclaDestroy(){


}