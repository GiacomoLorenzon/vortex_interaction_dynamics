#ifndef BASILISK_HEADER_16
#define BASILISK_HEADER_16
#line 1 "/root/mnt/basilisk/src/draw_json.h"
// Automatically generated by json.awk
// DO NOT EDIT MANUALLY, edit json.awk instead

int _view_set_json (void * q, char * s, int len) {
  struct _view_set * p = (struct _view_set *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"view_set\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"tx\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->tx);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"ty\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->ty);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"fov\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->fov);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"quat\": { \"type\": \"pfloat\", \"cardinality\": 4, \"value\": [%f,%f,%f,%f] }", p->quat[0], p->quat[1], p->quat[2], p->quat[3]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"sx\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->sx);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"sy\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->sy);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"sz\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->sz);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"width\": { \"type\": \"punsigned\", \"cardinality\": 1, \"value\": \"%d\" }", p->width);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"height\": { \"type\": \"punsigned\", \"cardinality\": 1, \"value\": \"%d\" }", p->height);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"samples\": { \"type\": \"punsigned\", \"cardinality\": 1, \"value\": \"%d\" }", p->samples);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"bg\": { \"type\": \"pfloat\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->bg[0], p->bg[1], p->bg[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"theta\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->theta);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"phi\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->phi);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"psi\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->psi);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"relative\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->relative);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"tz\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->tz);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"near\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->near);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"far\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->far);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"res\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->res);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"camera\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->camera);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"cache\": { \"type\": \"pint\", \"cardinality\": 1, \"value\": \"%d\" }", p->cache);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"p1x\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->p1x);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"p1y\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->p1y);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"p2x\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->p2x);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"p2y\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->p2y);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _translate_json (void * q, char * s, int len) {
  struct _translate * p = (struct _translate *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"translate\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"x\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->x);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"y\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->y);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"z\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->z);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _mirror_json (void * q, char * s, int len) {
  struct _mirror * p = (struct _mirror *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"mirror\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"n\": { \"type\": \"coord\", \"cardinality\": 3, \"value\": [%lf,%lf,%lf] }", p->n.x, p->n.y, p->n.z);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"alpha\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->alpha);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _draw_vof_json (void * q, char * s, int len) {
  struct _draw_vof * p = (struct _draw_vof *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"draw_vof\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"c\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->c);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"s\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->s);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"edges\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->edges);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"larger\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->larger);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"filled\": { \"type\": \"pint\", \"cardinality\": 1, \"value\": \"%d\" }", p->filled);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"color\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->color);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"min\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->min);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"max\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->max);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"spread\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->spread);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"linear\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->linear);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"fc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->fc[0], p->fc[1], p->fc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _isoline_json (void * q, char * s, int len) {
  struct _isoline * p = (struct _isoline *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"isoline\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"phi\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->phi);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"val\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->val);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"n\": { \"type\": \"pint\", \"cardinality\": 1, \"value\": \"%d\" }", p->n);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"c\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->c);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"s\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->s);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"edges\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->edges);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"larger\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->larger);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"filled\": { \"type\": \"pint\", \"cardinality\": 1, \"value\": \"%d\" }", p->filled);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"color\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->color);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"min\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->min);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"max\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->max);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"spread\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->spread);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"linear\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->linear);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"fc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->fc[0], p->fc[1], p->fc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _cells_json (void * q, char * s, int len) {
  struct _cells * p = (struct _cells *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"cells\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"n\": { \"type\": \"coord\", \"cardinality\": 3, \"value\": [%lf,%lf,%lf] }", p->n.x, p->n.y, p->n.z);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"alpha\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->alpha);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _vectors_json (void * q, char * s, int len) {
  struct _vectors * p = (struct _vectors *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"vectors\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"u\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->u);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"scale\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->scale);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _squares_json (void * q, char * s, int len) {
  struct _squares * p = (struct _squares *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"squares\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"color\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->color);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"z\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->z);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"min\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->min);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"max\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->max);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"spread\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->spread);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"linear\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->linear);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"fc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->fc[0], p->fc[1], p->fc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"n\": { \"type\": \"coord\", \"cardinality\": 3, \"value\": [%lf,%lf,%lf] }", p->n.x, p->n.y, p->n.z);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"alpha\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->alpha);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _box_json (void * q, char * s, int len) {
  struct _box * p = (struct _box *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"box\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"notics\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->notics);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _isosurface_json (void * q, char * s, int len) {
  struct _isosurface * p = (struct _isosurface *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"isosurface\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"f\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->f);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"v\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->v);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"color\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->color);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"min\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->min);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"max\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->max);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"spread\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->spread);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"linear\": { \"type\": \"pbool\", \"cardinality\": 1, \"value\": \"%d\" }", p->linear);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"fc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->fc[0], p->fc[1], p->fc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _travelling_json (void * q, char * s, int len) {
  struct _travelling * p = (struct _travelling *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"travelling\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"start\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->start);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"end\": { \"type\": \"pdouble\", \"cardinality\": 1, \"value\": \"%lf\" }", p->end);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"tx\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->tx);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"ty\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->ty);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"quat\": { \"type\": \"pfloat\", \"cardinality\": 4, \"value\": [%f,%f,%f,%f] }", p->quat[0], p->quat[1], p->quat[2], p->quat[3]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"fov\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->fov);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _draw_string_json (void * q, char * s, int len) {
  struct _draw_string * p = (struct _draw_string *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"draw_string\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"str\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->str);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"pos\": { \"type\": \"pint\", \"cardinality\": 1, \"value\": \"%d\" }", p->pos);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"size\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->size);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

int _labels_json (void * q, char * s, int len) {
  struct _labels * p = (struct _labels *) q;
  int i, len1 = 0;
  i = snprintf (s, len, "  \"labels\" : {");
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n    \"f\": { \"type\": \"pstring\", \"cardinality\": 1, \"value\": \"%s\" }", p->f);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lc\": { \"type\": \"color\", \"cardinality\": 3, \"value\": [%f,%f,%f] }", p->lc[0], p->lc[1], p->lc[2]);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, ",\n    \"lw\": { \"type\": \"pfloat\", \"cardinality\": 1, \"value\": \"%f\" }", p->lw);
  s += i, len -= i, len1 += i;
  i = snprintf (s, len, "\n  }");
  s += i, len -= i, len1 += i;
  return len1;
}

#endif
